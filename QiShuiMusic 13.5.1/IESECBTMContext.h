@interface IESECBTMContext : NSObject
@property (nonatomic) NSString btmInfo;
@property (nonatomic) UIResponder host;
@property (nonatomic) BOOL enterNewPage;
- (id)btmInfo;
- (BOOL)enterNewPage;
- (id)initWithBtmInfo:host:enterNewPage:;
- (void)setBtmInfo:;
- (void)setEnterNewPage:;
- (id)host;
- (void)setHost:;
- (void).cxx_destruct;
+ (id)createInnerCtx:host:;
+ (id)createJumpCtx:host:;
@end
