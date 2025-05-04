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
- (BOOL)showInnerShare;
- (void)setShowInnerShare:;
- (BOOL)showOuterShare;
- (void)setShowOuterShare:;
- (BOOL)disableRepost;
- (void)setDisableRepost:;
- (BOOL)disablePrivateMessage;
- (void)setDisablePrivateMessage:;
- (void).cxx_destruct;
- (id)tip;
- (void)setTip:;
@end
