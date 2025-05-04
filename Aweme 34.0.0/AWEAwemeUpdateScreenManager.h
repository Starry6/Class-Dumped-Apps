@interface AWEAwemeUpdateScreenManager : NSObject
@property (nonatomic) BOOL clearScreen;
@property (nonatomic) NSString clearItemID;
@property (nonatomic) double enterClearScreenTime;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString status;
@property (nonatomic) BOOL isCleared;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterMethod:;
- (id)enterMethod;
- (void)setClearScreen:;
- (void)setIsCleared:;
- (double)enterClearScreenTime;
- (void)setEnterClearScreenTime:;
- (void)traceClearScreenStatus:enterMethod:referStr:model:;
- (id)clearItemID;
- (void)setClearItemID:;
- (void)setStatus:;
- (void).cxx_destruct;
- (id)status;
- (BOOL)isCleared;
- (BOOL)clearScreen;
+ (id)shareManager;
@end
