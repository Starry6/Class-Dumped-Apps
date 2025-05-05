@interface CNCardDowntimeWhitelistGroupItem : CNPropertyGroupItem
- (BOOL)isReadonly;
- (void)saveChangesImmediately:;
- (BOOL)canRemove;
@end
