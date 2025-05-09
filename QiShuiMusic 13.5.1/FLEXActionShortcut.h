@interface FLEXActionShortcut : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) @? subtitleFuture;
@property (nonatomic) @? viewerFuture;
@property (nonatomic) @? selectionHandler;
@property (nonatomic) @? accessoryTypeFuture;
@property (nonatomic) FLEXObjectExplorerDefaults defaults;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isCallable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTitle:subtitle:viewer:selectionHandler:accessoryType:;
- (id)titleWith:;
- (id)subtitleWith:;
- (id)didSelectActionWith:;
- (id)viewerWith:;
- (long long)accessoryTypeWith:;
- (id)customReuseIdentifierWith:;
- (BOOL)isEditable;
- (BOOL)isCallable;
- (id)defaults;
- (void)setDefaults:;
- (id)title;
- (id)subtitleFuture;
- (id)viewerFuture;
- (id)selectionHandler;
- (id)accessoryTypeFuture;
- (void).cxx_destruct;
+ (id)title:subtitle:viewer:accessoryType:;
+ (id)title:subtitle:selectionHandler:accessoryType:;
@end
