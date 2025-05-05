@interface CJPayLineUtil : NSObject
+ (id)addBottomLineToView:lineHeight:marginLeft:marginRight:marginBottom:color:;
+ (id)addBottomLineToView:marginLeft:marginRight:marginBottom:;
+ (id)addBottomLineToView:marginLeft:marginRight:marginBottom:color:;
+ (id)addRightLineToView:marginTop:marginBottom:marginRight:;
+ (id)addRightLineToView:marginTop:marginBottom:marginRight:color:;
+ (id)addTopLineToView:marginLeft:marginRight:marginTop:;
+ (id)addTopLineToView:marginLeft:marginRight:marginTop:color:;
+ (void)cj_drawLines:withRoundedCorners:radius:viewRect:;
+ (void)cj_drawLines:withRoundedCorners:radius:viewRect:color:;
+ (void)removeBottomLineFromView:;
+ (double)lineHeight;
@end
