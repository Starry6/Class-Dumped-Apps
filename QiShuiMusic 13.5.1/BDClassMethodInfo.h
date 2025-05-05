@interface BDClassMethodInfo : NSObject
@property (nonatomic) ^{objc_method=} method;
@property (nonatomic) NSString name;
@property (nonatomic) : sel;
@property (nonatomic) ^? imp;
@property (nonatomic) NSString typeEncoding;
@property (nonatomic) NSString returnTypeEncoding;
@property (nonatomic) NSArray argumentTypeEncodings;
- (id)argumentTypeEncodings;
- (id)returnTypeEncoding;
- (SEL)sel;
- (id)method;
- (void).cxx_destruct;
- (id)name;
- (id)typeEncoding;
- (id)initWithMethod:;
- (id)imp;
@end
