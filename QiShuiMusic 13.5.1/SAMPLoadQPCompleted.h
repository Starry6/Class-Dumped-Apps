@interface SAMPLoadQPCompleted : SABaseCommand
@property (nonatomic) SAMPCollection loadedItems;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)loadedItems;
- (void)setLoadedItems:;
+ (id)loadQPCompleted;
+ (id)loadQPCompletedWithDictionary:context:;
@end
