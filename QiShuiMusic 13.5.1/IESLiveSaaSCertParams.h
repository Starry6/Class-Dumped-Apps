@interface IESLiveSaaSCertParams : NSObject
@property (nonatomic) NSString scene;
@property (nonatomic) NSString flow;
@property (nonatomic) NSString certAppID;
@property (nonatomic) NSString ticket;
@property (nonatomic) BOOL forceFaceOnly;
@property (nonatomic) UIViewController fromViewController;
@property (nonatomic) BOOL forcePresent;
- (id)certAppID;
- (BOOL)forceFaceOnly;
- (BOOL)forcePresent;
- (void)setCertAppID:;
- (void)setForceFaceOnly:;
- (void)setForcePresent:;
- (void)setFromViewController:;
- (void)setScene:;
- (id)fromViewController;
- (id)scene;
- (void).cxx_destruct;
- (id)ticket;
- (void)setTicket:;
- (id)flow;
- (void)setFlow:;
@end
