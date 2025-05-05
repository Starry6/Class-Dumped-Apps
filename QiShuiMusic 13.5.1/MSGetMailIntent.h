@interface MSGetMailIntent : INIntent
@property (nonatomic) q readStatus;
@property (nonatomic) INPerson sender;
@property (nonatomic) INPerson recipient;
@property (nonatomic) NSString subject;
@end
