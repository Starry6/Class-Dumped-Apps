@interface CalExchangeCalendarItemExternalRepresentation : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)logHandle;
+ (id)dictionaryWithExternalRepresentationData:;
+ (id)externalRepresentationDataWithDictionary:;
@end
