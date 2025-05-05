@interface IFObjectHasher : NSObject
- (unsigned long long)finalize;
- (id)combine:;
- (id)combineBool:;
- (id)combineInteger:;
- (id)combineBytes:size:;
- (id)combineContentsOfPropertyListObject:;
- (id).cxx_construct;
@end
