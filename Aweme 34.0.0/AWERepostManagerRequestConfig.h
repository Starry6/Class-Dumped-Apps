@interface AWERepostManagerRequestConfig : NSObject
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) AWEAwemeModel fromAweme;
@property (nonatomic) NSString pageType;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL isEmptyRepost;
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
- (void)setIsEmptyRepost:;
- (id)extraLogDict;
- (BOOL)isEmptyRepost;
- (void)setPageType:;
- (void).cxx_destruct;
- (BOOL)isSuccess;
- (id)pageType;
- (void)setIsSuccess:;
@end
