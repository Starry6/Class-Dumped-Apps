@interface PKInkToolMinimizedImageFactory : NSObject
+ (id)imageForInk:sizeState:;
+ (id)_minimizedToolImageForInk:size:scale:sizeState:;
+ (id)_maskImageForSizeState:;
+ (id)_ringImageForSizeState:;
+ (id)_imageForInk:size:scale:inkPickerSizeState:;
+ (id)_iPadImageForEraserWithSize:scale:;
+ (id)_iPadImageForToolWithInk:size:scale:;
+ (id)_baseNameForInkIdentifier:imageType:;
+ (id)_imageNameWithBaseName:sizeState:;
@end
