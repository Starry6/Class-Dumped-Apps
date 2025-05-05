@interface HybridLynxViewPreLayoutConfig : NSObject
@property (nonatomic) NSString schema;
@property (nonatomic) HybridContext context;
@property (nonatomic) double preferredLayoutWidth;
- (double)preferredLayoutWidth;
- (void)setPreferredLayoutWidth:;
- (id)schema;
- (id)context;
- (void)setSchema:;
- (void).cxx_destruct;
- (void)setContext:;
@end
