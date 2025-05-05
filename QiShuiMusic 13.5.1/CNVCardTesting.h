@interface CNVCardTesting : NSObject
+ (id)parseCardWithBodyLine:;
+ (id)parseCardWithBodyLines:;
+ (id)parseCardWithBodyLines:version:encoding:;
+ (id)parseCardWithData:;
+ (id)parseCardWithData:options:;
+ (id)cardDataWithBodyLines:version:encoding:;
+ (id)resultWithProperty:value:label:isPrimary:;
+ (id)complexValueWithValue:label:isPrimary:;
+ (id)unknownPropertyWithName:line:;
+ (id)linesUsingAdapter:;
+ (id)linesUsingAdapter:options:;
+ (id)version30DataUsingAdapter:;
+ (id)version21DataUsingAdapter:;
+ (BOOL)version30CardForPerson:containsLine:;
+ (BOOL)version30CardForPerson:containsString:;
+ (BOOL)version30DataUsingAdapter:containsData:;
+ (BOOL)version21DataUsingAdapter:containsData:;
+ (id)itemWithValue:label:;
+ (id)emailItemWithAddress:label:;
+ (id)instantMessagingItemWithUsername:service:label:;
+ (id)gregorianDateWithYear:month:day:;
+ (id)chineseDateWithEra:year:month:day:;
+ (id)activityAlertResultWithTypes:sounds:vibrations:;
@end
