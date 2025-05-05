@interface TIKeyboardLayoutFactory : NSObject
@property (nonatomic) ^v layoutsLibraryHandle;
@property (nonatomic) NSMutableDictionary internalCache;
- (id)init;
- (id)internalCache;
- (id)keyboardPrefixForWidth:andEdge:;
- (void).cxx_destruct;
- (id)layoutsLibraryHandle;
- (id)keyboardWithName:inCache:;
- (void)setInternalCache:;
+ (id)sharedKeyboardFactory;
+ (id)layoutsFileName;
@end
