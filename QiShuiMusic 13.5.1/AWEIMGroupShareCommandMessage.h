@interface AWEIMGroupShareCommandMessage : AWEIMMessage
@property (nonatomic) AWEIMShareCommandModel commandData;
@property (nonatomic) BOOL isFetchedSuccessfully;
@property (nonatomic) NSString token;
@property (nonatomic) double expireTime;
@property (nonatomic) NSString pasteDescription;
@property (nonatomic) AWEIMShareDataModel shareData;
- (void)setCommandData:;
- (id)commandData;
- (id)getContentDict;
- (id)initWithContentDict:;
- (BOOL)isFetchedSuccessfully;
- (id)pasteDescription;
- (void)setIsFetchedSuccessfully:;
- (void)setPasteDescription:;
- (id)token;
- (void)setToken:;
- (void).cxx_destruct;
- (double)expireTime;
- (void)setExpireTime:;
- (id)shareData;
- (void)setShareData:;
@end
