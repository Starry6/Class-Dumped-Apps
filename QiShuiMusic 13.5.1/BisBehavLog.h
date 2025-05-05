@interface BisBehavLog : NSObject
@property (nonatomic) BisClientInfo clientInfo;
@property (nonatomic) BisBehavToken behavToken;
@property (nonatomic) BisBehavCommon behavCommon;
@property (nonatomic) NSMutableArray behavTask;
- (void)setBehavCommon:;
- (id)behavCommon;
- (id)behavTask;
- (id)behavToken;
- (void)setBehavTask:;
- (void)setBehavToken:;
- (void)setClientInfo:;
- (id)clientInfo;
- (void).cxx_destruct;
@end
