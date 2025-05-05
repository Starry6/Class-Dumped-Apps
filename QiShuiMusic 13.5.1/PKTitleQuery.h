@interface PKTitleQuery : NSObject
@property (nonatomic) CHTitleQuery titleQuery;
@property (nonatomic) PKDrawing drawing;
@property (nonatomic) <PKTitleQueryDelegate> delegate;
@property (nonatomic) NSString transcribedTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)start;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)pause;
- (id)drawing;
- (id)titleQuery;
- (void)setTitleQuery:;
- (id)initWithDrawing:;
- (id)transcribedTitle;
- (void)queryDidUpdateResult:;
- (void)setDrawing:;
@end
