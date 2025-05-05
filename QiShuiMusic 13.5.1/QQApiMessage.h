@interface QQApiMessage : NSObject
@property (nonatomic) Q type;
@property (nonatomic) QQApiObject object;
@property (nonatomic) ArkObject arkObject;
@property (nonatomic) BOOL isSupportArk;
@property (nonatomic) QQApiMiniProgramObject miniObject;
- (id)arkObject;
- (id)initWithArkObject:andType:;
- (id)initWithMiniObject:andType:;
- (id)initWithObject:andType:;
- (BOOL)isSupportArk;
- (id)miniObject;
- (void)setArkObject:;
- (void)setIsSupportArk:;
- (void)setMiniObject:;
- (void)setObject:;
- (void)dealloc;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)object;
+ (id)messageWithArkObject:andType:;
+ (id)messageWithMiniObject:andType:;
+ (id)messageWithObject:andType:;
+ (id)messageWithObject:;
@end
