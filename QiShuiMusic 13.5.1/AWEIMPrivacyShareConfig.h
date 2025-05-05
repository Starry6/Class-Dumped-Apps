@interface AWEIMPrivacyShareConfig : NSObject
@property (nonatomic) NSString tip;
@property (nonatomic) BOOL showInnerShare;
@property (nonatomic) BOOL showOuterShare;
@property (nonatomic) BOOL disableRepost;
@property (nonatomic) BOOL disablePrivateMessage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)disablePrivateMessage;
- (BOOL)disableRepost;
- (void)setDisablePrivateMessage:;
- (void)setDisableRepost:;
- (void)setShowInnerShare:;
- (void)setShowOuterShare:;
- (BOOL)showInnerShare;
- (BOOL)showOuterShare;
- (id)tip;
- (void)setTip:;
- (void).cxx_destruct;
@end
