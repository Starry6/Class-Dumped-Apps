@interface AWEIMShareRiskWarningManager : NSObject
+ (void)transferToURLString:;
+ (BOOL)shouldShowWithGid:;
+ (id)riskWarningTextWithModel:;
+ (id)riskWarningTextWithModel:fontSize:;
+ (id)titleWithRiskWarningModel:fontSize:;
+ (id)attrbutedStringWithTitle:color:highlightColor:font:needCenter:riskWarningModel:awemeModel:lineSpacing:;
+ (id)paramModelByText:forModel:;
+ (BOOL)enable;
@end
