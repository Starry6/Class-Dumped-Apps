@interface SASyncSyncPromise : SABaseCommand
@property (nonatomic) NSArray keys;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)keys;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setKeys:;
- (id)encodedClassName;
+ (id)syncPromise;
+ (id)syncPromiseWithDictionary:context:;
@end
