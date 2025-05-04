@interface AWENaviPostComposer : NSObject
@property (nonatomic) NSString resourcePath;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString musicId;
@property (nonatomic) AWENaviNodeComposer nodeComposer;
@property (nonatomic) BOOL noLandingAfterPublish;
@property (nonatomic) q repeatCount;
@property (nonatomic) Q editPageBottomButtonStyle;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setMusicId:;
- (void)setNoLandingAfterPublish:;
- (void)setEditPageBottomButtonStyle:;
- (id)musicId;
- (unsigned long long)editPageBottomButtonStyle;
- (void)setNodeComposer:;
- (id)nodeComposer;
- (BOOL)noLandingAfterPublish;
- (id)init;
- (void)setRepeatCount:;
- (id)resourcePath;
- (void).cxx_destruct;
- (long long)repeatCount;
- (void)setResourcePath:;
+ (id)resourceWithPath:from:musicId:nodeComposer:;
@end
