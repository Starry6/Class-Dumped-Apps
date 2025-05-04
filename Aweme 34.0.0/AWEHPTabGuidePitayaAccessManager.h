@interface AWEHPTabGuidePitayaAccessManager : NSObject
@property (nonatomic) NSMapTable handlers;
- (void)registerButtonShowTriggerHandler:enterFrom:awemeID:;
- (void)startPitayaVerifyWithAwemeList:enterFrom:completion:;
- (id)keyWithEnterFrom:awemeID:;
- (id)p_generatePitayaRequestParamsWithList:enterFrom:version:;
- (void)p_handlePitayaResponse:withAwemeList:enterFrom:version:;
- (id)p_generatePitayaRequestParamsWithAweme:enterFrom:;
- (id)handlers;
- (id)init;
- (void)setup;
- (void)setHandlers:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
