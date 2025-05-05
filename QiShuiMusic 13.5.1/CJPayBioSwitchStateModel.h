@interface CJPayBioSwitchStateModel : NSObject
@property (nonatomic) NSString code;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) NSString msg;
@property (nonatomic) q style;
- (id)toJson;
- (BOOL)isOpen;
- (void)setIsOpen:;
- (void)setStyle:;
- (id)code;
- (void).cxx_destruct;
- (void)setCode:;
- (long long)style;
- (id)msg;
- (void)setMsg:;
@end
