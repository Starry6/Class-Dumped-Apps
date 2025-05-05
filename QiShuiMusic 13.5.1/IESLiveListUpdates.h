@interface IESLiveListUpdates : NSObject
+ (void)calculateUpdatesForOldModel:newModel:eliminatesDuplicates:completion:;
@end
