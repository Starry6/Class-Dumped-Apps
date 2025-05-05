@interface MPRemoteCommandHandlerDialogAction : NSObject
@property (nonatomic) MRSendCommandHandlerDialogAction mediaRemoteType;
@property (nonatomic) NSString title;
@property (nonatomic) MPRemoteCommandEvent event;
@property (nonatomic) q type;
- (id)event;
- (long long)type;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithMediaRemoteType:;
- (id)mediaRemoteType;
+ (id)actionWithTitle:type:commandEvent:;
@end
