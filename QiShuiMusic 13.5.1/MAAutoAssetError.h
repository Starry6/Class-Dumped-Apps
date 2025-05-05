@interface MAAutoAssetError : NSObject
+ (id)buildError:fromOperation:underlyingError:withDescription:;
+ (id)summaryForCode:fromOperation:;
@end
