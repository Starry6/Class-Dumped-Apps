@interface AWEReuseMVTemplateShareChannel : AWEShareBaseChannel
- (id)shareImage;
- (id)shareTitleFromSettings;
- (id)aAWEShareServiceDOUYINHTSAdapter;
- (void)reusePicTemplate:params:;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
+ (Class)aAWEShareServiceDOUYINHTSAdapterClass;
@end
