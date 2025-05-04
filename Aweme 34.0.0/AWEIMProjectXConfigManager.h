@interface AWEIMProjectXConfigManager : NSObject
@property (nonatomic) NSDictionary messageConfig;
@property (nonatomic) UIImage profile_send_msg_btn_icon;
@property (nonatomic) NSString alert_install_transfer_title;
@property (nonatomic) UIImage share_board_im_icon;
@property (nonatomic) UIImage share_board_im_red_envelope_icon;
@property (nonatomic) NSString videoRedEnvelopeMessage;
@property (nonatomic) NSString redEnvelopeMessage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)share_board_im_red_envelope_icon;
- (id)share_board_im_icon;
- (void)syncConfig;
- (void)setMessageConfig:;
- (id)messageConfig;
- (id)messageConfigForProjectXMessage:;
- (id)profile_send_msg_btn_icon;
- (id)alert_install_transfer_title;
- (id)videoRedEnvelopeMessage;
- (id)redEnvelopeMessage;
- (id)floatingConfigForProjectXMessage:;
- (BOOL)hasConfigForProjectXMessage:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
