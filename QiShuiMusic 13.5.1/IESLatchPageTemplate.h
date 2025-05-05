@interface IESLatchPageTemplate : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString version;
@property (nonatomic) q minSdkVersion;
@property (nonatomic) NSArray children;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)minSdkVersion;
- (void)setMinSdkVersion:;
- (void)setName:;
- (id)jsonRepresentation;
- (void)setVersion:;
- (id)version;
- (id)process:;
- (id)children;
- (void)setChildren:;
- (void).cxx_destruct;
- (id)name;
@end
