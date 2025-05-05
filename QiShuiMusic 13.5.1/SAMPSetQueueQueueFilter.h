@interface SAMPSetQueueQueueFilter : AceObject
@property (nonatomic) NSString mediaItemProperty;
@property (nonatomic) NSString operation;
@property (nonatomic) NSString value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)operation;
- (id)groupIdentifier;
- (void)setOperation:;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
- (id)mediaItemProperty;
- (void)setMediaItemProperty:;
+ (id)setQueueQueueFilter;
+ (id)setQueueQueueFilterWithDictionary:context:;
@end
