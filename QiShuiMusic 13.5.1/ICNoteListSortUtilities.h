@interface ICNoteListSortUtilities : NSObject
+ (void)clearCache;
+ (long long)sortTypeForTag:;
+ (BOOL)isMenuItemCurrentSortTypeForTag:;
+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:folderNoteSortType:;
+ (long long)folderSortOrderForNoteListSortType:;
+ (id)descriptionForNoteListSortType:;
+ (long long)tagForSortType:;
+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:;
+ (long long)currentNoteListSortType;
+ (id)sortDescriptorsForType:;
+ (id)legacySortDescriptorsForType:;
+ (id)sortDescriptorsForType:ascending:;
+ (id)legacySortDescriptorsForType:ascending:;
+ (id)sortDescriptorsForCurrentType;
+ (long long)sortTypeForFolderNoteOrder:;
+ (id)dateForCurrentSortTypeAccessibilityStringForNote:;
+ (void)setCurrentNoteListSortType:;
+ (id)sortDescriptorsForPinnedNotes;
+ (void)setCurrentNoteListSortTypeByTag:;
+ (id)dateForCurrentSortTypeForNote:;
@end
