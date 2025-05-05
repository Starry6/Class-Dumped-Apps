@interface WBSProtectionSpaceMatch : NSObject
@property (nonatomic) NSURLProtectionSpace protectionSpace;
@property (nonatomic) NSDictionary credentials;
@property (nonatomic) NSURLCredential defaultCredential;
@property (nonatomic) q matchLevel;
- (id)credentials;
- (id)protectionSpace;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithProtectionSpace:credentials:defaultCredential:matchLevel:;
- (id)defaultCredential;
- (long long)matchLevel;
@end
