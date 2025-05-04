@interface AWEPOILynxCellIdentifierBuilder : NSObject
+ (id)lynxCellIdentifierWithDynamicID:index:;
+ (BOOL)isLynxCellIdentifier:;
+ (long long)dynamicIdWithLynxCellIdentifier:;
@end
