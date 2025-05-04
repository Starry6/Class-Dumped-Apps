@interface AWEDoubleColumnFeatureSequenceRegistry : NSObject
+ (BOOL)doubleColumnDisableLive:;
+ (BOOL)isEmptySearchQueryAllWithParams:;
+ (void)registerDoubleColumnSequence;
+ (void)registerDoubleColumnCreateEvents;
+ (void)registerDoubleColumnItemEvents;
+ (void)registerDoubleColumnFeatures;
@end
