@interface BDNativeBaseComponent : NSObject
@property (nonatomic) NSString iFrameID;
@property (nonatomic) WKWebView webView;
@property (nonatomic) NSNumber tagId;
@property (nonatomic) NSArray radiusNums;
- (double)getRadiusByStr:;
- (void)actionInNativeContainerObject:method:params:callback:;
- (void)baseDeleteInNativeContainerObject:params:;
- (void)baseInsertInNativeContainerObject:params:;
- (void)baseUpdateInNativeContainerObject:params:;
- (void)containerFrameChanged:;
- (void)deleteInNativeContainerObject:params:;
- (void)fireComponentAction:params:;
- (id)getRadiusNumsByStrs:;
- (void)handleBorderRadiusWithObject:params:;
- (void)handleRadiusByRadiusNums:view:;
- (id)iFrameID;
- (id)insertInNativeContainerObject:params:;
- (id)radiusNums;
- (void)radiusView:topLeft:topRight:bottomRight:bottomLeft:;
- (void)setIFrameID:;
- (void)setRadiusNums:;
- (void)updateInNativeContainerObject:params:;
- (void)setWebView:;
- (id)webView;
- (void)setTagId:;
- (void).cxx_destruct;
- (id)tagId;
+ (id)nativeTagName;
@end
