@interface UISSlotLocalContent : NSObject
@property (nonatomic) C contentScale;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) BOOL isRemote;
@property (nonatomic) BOOL shouldReplaceExistingContent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned char)contentScale;
- (void)dealloc;
- (id)contentSize;
- (BOOL)isRemote;
- (id)image;
- (void)deleteFromLayerContext:;
- (BOOL)shouldReplaceExistingContent;
- (id)initWithDrawing:scale:range:;
- (id)initWithImage:scale:;
+ (id)contentWithDrawing:style:;
+ (id)contentWithDrawing:scale:range:;
+ (id)contentWithImage:scale:;
@end
