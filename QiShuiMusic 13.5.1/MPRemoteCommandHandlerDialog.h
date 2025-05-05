@interface MPRemoteCommandHandlerDialog : NSObject
@property (nonatomic) MRSendCommandHandlerDialog mediaRemoteType;
@property (nonatomic) NSString localizedTitle;
@property (nonatomic) NSString localizedMessage;
@property (nonatomic) NSArray actions;
- (void)addAction:;
- (id)actions;
- (void).cxx_destruct;
- (id)localizedTitle;
- (id)description;
- (void)setLocalizedTitle:;
- (id)copyWithZone:;
- (id)localizedMessage;
- (void)setLocalizedMessage:;
- (id)initWithMediaRemoteType:;
- (id)mediaRemoteType;
+ (id)dialogWithTitle:message:;
@end
