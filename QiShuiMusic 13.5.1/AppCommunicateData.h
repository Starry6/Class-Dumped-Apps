@interface AppCommunicateData : NSObject
@property (nonatomic) NSInteger result;
@property (nonatomic) BOOL returnFromApp;
@property (nonatomic) NSString conversationAccount;
@property (nonatomic) NSData fileData;
@property (nonatomic) NSInteger scene;
@property (nonatomic) NSString openID;
@property (nonatomic) NSString sdkVer;
@property (nonatomic) NSString lang;
@property (nonatomic) NSString country;
@property (nonatomic) NSString toUserOpenID;
@property (nonatomic) NSString universalLink;
@property (nonatomic) BOOL isAutoResend;
- (BOOL)MakeLinkObject:;
- (id)DataToResp;
- (BOOL)MakeAuthRequest:;
- (BOOL)MakeCommand:;
- (BOOL)MakeMediaMessage:;
- (BOOL)MakeTextMessage:;
- (BOOL)ReqToData:;
- (BOOL)RespToData:;
- (id)DataToReq;
- (BOOL)MakeAuthResp:;
- (BOOL)MakeMediaInternalMessage:;
- (BOOL)MakeSceneDataObject:withText:;
- (BOOL)MakeTextMessageInState:;
- (BOOL)ReqToData:withMediaInternalMessage:;
- (void)makeChannelShareVideoToDicData:;
- (id)authResp;
- (id)conversationAccount;
- (void)initCommonField:;
- (id)initWithPropertList:;
- (BOOL)isAutoResend;
- (BOOL)makeStateSceneObject:;
- (id)mediaInternalMessage;
- (id)mediaMessage;
- (id)openID;
- (id)propertList;
- (BOOL)returnFromApp;
- (id)sceneMessage;
- (id)sdkVer;
- (void)setConversationAccount:;
- (void)setIsAutoResend:;
- (void)setOpenID:;
- (void)setReturnFromApp:;
- (void)setSdkVer:;
- (void)setToUserOpenID:;
- (id)toUserOpenID;
- (id)transferToStringWithDataErasedPtr:;
- (id)tryRemoveUnnecessaryData:;
- (id)weAppExtDic;
- (int)result;
- (id)country;
- (id)init;
- (void)setScene:;
- (int)scene;
- (void)setCountry:;
- (unsigned long long)command;
- (void).cxx_destruct;
- (void)setUniversalLink:;
- (id)description;
- (void)setResult:;
- (id)fileData;
- (void)setFileData:;
- (id)universalLink;
- (id)textMessage;
- (id)lang;
- (void)setLang:;
- (id)authRequest;
@end
