@interface MICandidateContainer : NSObject
@property (nonatomic) NSURL rootURL;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSDictionary metadata;
@property (nonatomic) q estimatedSize;
@property (nonatomic) BOOL isAppleApp;
- (id)metadata;
- (id)identifier;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)rootURL;
- (long long)estimatedSize;
- (id)initWithContainerURL:identifier:metadata:;
- (BOOL)isAppleApp;
@end
