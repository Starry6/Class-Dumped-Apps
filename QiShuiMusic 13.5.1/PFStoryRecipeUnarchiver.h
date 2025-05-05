@interface PFStoryRecipeUnarchiver : NSObject
- (id)unarchivedRecipeWithData:error:;
- (id)unarchivedRecipeWithJSONObject:error:;
- (id)_unarchivedLibraryWithJSONObject:error:;
- (id)unarchivedAssetWithJSONObject:error:;
- (id)_existingKeyInDictionary:forObject:;
- (id)_unarchivedOverallDurationInfoWithJSONObject:;
- (id)_unarchivedStyleWithJSONObject:;
- (id)_unarchivedDecisionListWithJSONObject:songAssetIdentifier:;
- (id)_unarchivedClipWithJSONObject:;
- (id)_unarchivedDurationInfoWithJSONObject:;
- (id)unarchiveTimeWithJSONObject:;
@end
