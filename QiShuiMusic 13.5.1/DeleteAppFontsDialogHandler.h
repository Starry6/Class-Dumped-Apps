@interface DeleteAppFontsDialogHandler : NSObject
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSXPCListener listener;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCompletionHandler:;
- (id)listener;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)setListener:;
- (id)initWithCompletionHandler:;
- (id)completionHandler;
- (void)doneWithDeleteAppFonts:;
- (void)showDialogWithUserInfo:;
@end
