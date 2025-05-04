@interface AWERepostManagerClickConfig : NSObject
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) AWEAwemeModel fromAweme;
@property (nonatomic) NSString pageType;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSDictionary extraLogDict;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)aweme;
- (void)setAweme:;
- (id)enterMethod;
- (id)enterFrom;
- (void)setExtraLogDict:;
- (void)setFromAweme:;
- (id)fromAweme;
- (id)extraLogDict;
- (void)setPageType:;
- (void).cxx_destruct;
- (id)pageType;
@end
