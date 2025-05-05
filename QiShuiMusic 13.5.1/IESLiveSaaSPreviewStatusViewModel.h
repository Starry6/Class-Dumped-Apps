@interface IESLiveSaaSPreviewStatusViewModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL isInLive;
- (id)initWithRoomModel:;
- (BOOL)isInLive;
- (void)setIsInLive:;
- (id)title;
- (void).cxx_destruct;
- (id)name;
@end
