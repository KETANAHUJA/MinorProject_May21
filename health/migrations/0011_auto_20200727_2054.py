# Generated by Django 3.0 on 2020-07-27 15:24

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('health', '0010_auto_20200727_1409'),
    ]

    operations = [
        migrations.CreateModel(
            name='Searched_symptom',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('idso', models.CharField(max_length=1000, null=True)),
                ('name', models.CharField(max_length=1000, null=True)),
                ('name1', models.CharField(max_length=1000, null=True)),
                ('num', models.IntegerField(null=True)),
            ],
        ),
        migrations.DeleteModel(
            name='Searched_symptom2',
        ),
    ]
