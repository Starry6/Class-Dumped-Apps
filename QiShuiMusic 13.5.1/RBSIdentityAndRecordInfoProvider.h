@interface RBSIdentityAndRecordInfoProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_initWithIdentity:record:;
- (void).cxx_destruct;
- (id)fetchWrappedInfoWithError:;
+ (id)_providerWithIdentity:record:;
@end
