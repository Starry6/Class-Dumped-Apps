@interface CJPayBioCheckSateModel : NSObject
@property (nonatomic) BOOL isShow;
@property (nonatomic) BOOL isOPen;
@property (nonatomic) NSString msg;
@property (nonatomic) NSString bioType;
@property (nonatomic) q style;
- (id)bioType;
- (BOOL)isOPen;
- (BOOL)isShow;
- (void)setBioType:;
- (void)setIsOPen:;
- (void)setIsShow:;
- (id)toJson;
- (void)setStyle:;
- (void).cxx_destruct;
- (long long)style;
- (id)msg;
- (void)setMsg:;
@end
