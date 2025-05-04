@interface AWEDetailImageTemplateTracker : NSObject
@property (nonatomic) AWEDetailImageTemplateViewModel viewModel;
@property (nonatomic) NSString creationId;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)creationId;
- (void)setCreationId:;
- (void)trackEnterPersonalDetailWithModel:;
- (void)trackFeedEnterWithModel:;
- (void)trackDetailPageClientShowWithModel:;
- (id)initWithStateContext:;
- (void)trackEnterImageTemplateDetail;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
