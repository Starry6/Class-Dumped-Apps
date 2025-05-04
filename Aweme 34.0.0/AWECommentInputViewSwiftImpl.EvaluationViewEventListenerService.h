@interface AWECommentInputViewSwiftImpl.EvaluationViewEventListenerService : NSObject
@property (nonatomic) @? sendElementEvent;
@property (nonatomic) @? titleElementEvent;
@property (nonatomic) @? ratingElementEvent;
@property (nonatomic) @? contentElementEvent;
@property (nonatomic) @? previewElementEvent;
@property (nonatomic) @? pageEvent;
@property (nonatomic) @? expansionEvent;
- (id)sendElementEvent;
- (void)setSendElementEvent:;
- (id)titleElementEvent;
- (void)setTitleElementEvent:;
- (id)ratingElementEvent;
- (void)setRatingElementEvent:;
- (id)contentElementEvent;
- (void)setContentElementEvent:;
- (id)previewElementEvent;
- (void)setPreviewElementEvent:;
- (id)expansionEvent;
- (void)setExpansionEvent:;
- (id)init;
- (void).cxx_destruct;
- (id)pageEvent;
- (void)setPageEvent:;
@end
