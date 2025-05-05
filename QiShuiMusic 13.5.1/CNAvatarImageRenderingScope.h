@interface CNAvatarImageRenderingScope : NSObject
+ (id)scopeWithPointSize:scale:rightToLeft:style:;
+ (id)scopeWithPointSize:scale:strokeWidth:strokeColor:rightToLeft:style:backgroundStyle:color:maskedAvatarIndices:;
+ (id)scopeWithPointSize:scale:strokeWidth:strokeColor:rightToLeft:style:;
+ (id)scopeWithPointSize:scale:rightToLeft:style:color:;
+ (id)scopeWithPointSize:scale:rightToLeft:style:backgroundStyle:;
+ (id)scopeWithPointSize:scale:strokeWidth:strokeColor:rightToLeft:style:color:;
@end
