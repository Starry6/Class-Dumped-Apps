@interface AWESearchTabTypeUtil : NSObject
+ (long long)displayTypeWithTabKey:;
+ (long long)displayTypeWithTabKey:scene:customForceType:;
+ (id)tabLabelNameWithTabKey:;
+ (long long)tabTypeWithViewController:customTypeBlock:;
@end
