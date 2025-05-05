@interface SAMPSetQueueQueueOrder : AceObject
@property (nonatomic) BOOL descending;
@property (nonatomic) NSString mediaItemProperty;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setDescending:;
- (id)mediaItemProperty;
- (void)setMediaItemProperty:;
- (BOOL)descending;
+ (id)setQueueQueueOrder;
+ (id)setQueueQueueOrderWithDictionary:context:;
@end
