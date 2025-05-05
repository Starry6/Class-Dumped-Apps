@interface UISceneOpenURLOptions : NSObject
@property (nonatomic) BSProcessHandle _sourceProcessHandle;
@property (nonatomic) BOOL _openAsDownload;
@property (nonatomic) NSString sourceApplication;
@property (nonatomic) @ annotation;
@property (nonatomic) BOOL openInPlace;
@property (nonatomic) UIEventAttribution eventAttribution;
- (id)annotation;
- (id)_initWithSourceApplication:processHandle:annotation:openInPlace:;
- (id)_initWithSourceApplication:processHandle:annotation:openInPlace:eventAttribution:openAsDownload:;
- (unsigned long long)hash;
- (BOOL)openInPlace;
- (id)sourceApplication;
- (id)_sourceProcessHandle;
- (void).cxx_destruct;
- (id)description;
- (id)eventAttribution;
- (BOOL)_openAsDownload;
- (BOOL)isEqual:;
+ (id)_optionsFromPayload:sourceProcessHandle:;
+ (id)_optionsFromDictionary:;
@end
