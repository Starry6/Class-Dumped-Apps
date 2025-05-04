@interface AWEShowAuthLayoutAction : NSObject
@property (nonatomic) AWERecordAuthViewHolder authViewHolder;
@property (nonatomic) <ACCRecorderViewContainer> viewContainer;
- (id)authViewHolder;
- (void)setAuthViewHolder:;
- (void)layout;
- (void).cxx_destruct;
- (void)setViewContainer:;
- (id)viewContainer;
+ (void)layoutWithViewContainer:viewHolder:;
+ (void)showUploadIn:viewHolder:;
+ (void)showDYCodeIn:viewHolder:;
+ (void)hideDYCodeIn:;
@end
